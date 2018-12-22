#pragma once

#include <memory>
#include <string>
#include <vector>
#include "module.hpp"
#include "instruments_manager.hpp"
#include "binary_container.hpp"
#include "gd3_tag.hpp"
#include "s98_tag.hpp"

class FileIO
{
public:
	static void saveModule(std::string path, std::weak_ptr<Module> mod,
						   std::weak_ptr<InstrumentsManager> instMan);
	static void loadModule(std::string path, std::weak_ptr<Module> mod,
						   std::weak_ptr<InstrumentsManager> instMan);
	static void saveInstrument(std::string path, std::weak_ptr<InstrumentsManager> instMan, int instNum);
	static AbstractInstrument* loadInstrument(std::string path, std::weak_ptr<InstrumentsManager> instMan,
											  int instNum);
	static void writeWave(std::string path, std::vector<int16_t> samples, uint32_t rate);

	static void writeVgm(std::string path, std::vector<uint8_t> samples, uint32_t clock, uint32_t rate,
						 bool loopFlag, uint32_t loopPoint, uint32_t loopSamples, uint32_t totalSamples,
						 bool gd3TagEnabled, GD3Tag tag);
	static void writeS98(std::string path, std::vector<uint8_t> samples, uint32_t clock, uint32_t rate,
						 bool loopFlag, uint32_t loopPoint, bool tagEnabled, S98Tag tag);

	static void backupModule(std::string path);

private:
	FileIO() {}

	static const FMEnvelopeParameter ENV_FM_PARAMS[38];

	static AbstractInstrument* loadDMPFile(std::string path,
										   std::weak_ptr<InstrumentsManager> instMan,
										   int instNum);
	static AbstractInstrument* loadTFIFile(std::string path,
										   std::weak_ptr<InstrumentsManager> instMan,
										   int instNum);
	static AbstractInstrument* loadVGIFile(std::string path,
										   std::weak_ptr<InstrumentsManager> instMan,
										   int instNum);
	static AbstractInstrument* loadOPNIFile(std::string path,
										   std::weak_ptr<InstrumentsManager> instMan,
										   int instNum);
	static size_t loadModuleSectionInModule(std::weak_ptr<Module> mod, BinaryContainer& ctr,
											size_t globCsr, uint32_t version);
	static size_t loadInstrumentSectionInModule(std::weak_ptr<InstrumentsManager> instMan,
												BinaryContainer& ctr, size_t globCsr, uint32_t version);
	static size_t loadInstrumentPropertySectionInModule(std::weak_ptr<InstrumentsManager> instMan,
														BinaryContainer& ctr, size_t globCsr,
														uint32_t version);
	static size_t loadInstrumentPropertyOperatorSequence(FMEnvelopeParameter param,
														 size_t instMemCsr,
														 std::weak_ptr<InstrumentsManager> instMan,
														 BinaryContainer& ctr, uint32_t version);
	static size_t loadGrooveSectionInModule(std::weak_ptr<Module> mod, BinaryContainer& ctr,
											size_t globCsr, uint32_t version);
	static size_t loadSongSectionInModule(std::weak_ptr<Module> mod, BinaryContainer& ctr,
										  size_t globCsr, uint32_t version);

	static size_t loadInstrumentPropertyOperatorSequenceForInstrument(
			FMEnvelopeParameter param, size_t instMemCsr, std::weak_ptr<InstrumentsManager> instMan,
			BinaryContainer& ctr, InstrumentFM* inst, int idx, uint32_t version);
};
