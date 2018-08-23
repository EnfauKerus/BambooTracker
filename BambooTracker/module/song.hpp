#pragma once

#include <vector>
#include <string>
#include "track.hpp"
#include "misc.hpp"

class Song
{
public:
	Song(int number, ModuleType modType, std::string title = u8"Song",
		 unsigned int tickFreq = 60, unsigned int tempo = 150, size_t stepSize = 6);

	int getNumber() const;
	void setTitle(std::string title);
	std::string getTitle() const;
	void setTickFrequency(unsigned int freq);
	unsigned int getTickFrequency() const;
	void setTempo(int tempo);
	int getTempo() const;
	void setStepSize(size_t size);
	size_t getStepSize() const;

	std::vector<TrackAttribute> getTrackAttributes() const;
	Track& getTrack(int num);

	std::vector<OrderData> getOrderData(int order);
	size_t getOrderSize() const;
	void insertOrderBelow(int order);
	void deleteOrder(int order);

private:
	int num_;
	ModuleType modType_;
	std::string title_;
	unsigned int tickFreq_;
	int tempo_;
	size_t stepSize_;

	std::vector<Track> tracks_;
};
