<!-- Icon & Title -->
<p align="center">
  <img src="./data/icons/128x128/apps/BambooTracker.png" alt="BambooTracker-icon" />
  <h1 align="center">BambooTracker</h1>
</p>
<!-- Badges -->
<p align="center">
  <a href="https://github.com/BambooTracker/BambooTracker/releases">
    <img src="https://img.shields.io/github/v/release/BambooTracker/BambooTracker?color=brightgreen" alt="BambooTracker Version Number (autogenerated image)" />
  </a>
  <img src="https://img.shields.io/badge/platforms-windows%20|%20macos%20|%20linux%20|%20bsd-yellow.svg" alt="BambooTracker Platforms: Windows, macOS, Linux, BSD" />
  <a href="./LICENSE">
    <img src="https://img.shields.io/github/license/BambooTracker/BambooTracker.svg" alt="BambooTracker License: GPL-2 Only" />
  </a>
  <br />
  (Build tests)<br />
  <a href="https://github.com/BambooTracker/BambooTracker/actions?query=workflow%3A%22Windows+7+and+up+%2832-bit%2C+Qt5%29%22">
    <img src="https://img.shields.io/github/workflow/status/BambooTracker/BambooTracker/Windows%207%20and%20up%20(32-bit,%20Qt5)?logo=windows-xp&logoColor=white" alt="BambooTracker Build-Test Status on Windows (Qt5)" />
  </a>
  <a href="https://github.com/BambooTracker/BambooTracker/actions?query=workflow%3A%22Windows+10+%2864-bit%2C+Qt6%29%22">
    <img src="https://img.shields.io/github/workflow/status/BambooTracker/BambooTracker/Windows%2010%20(64-bit,%20Qt6)?logo=windows&logoColor=white" alt="BambooTracker Build-Test Status on Windows (Qt6)" />
  </a>
  <a href="https://github.com/BambooTracker/BambooTracker/actions?query=workflow%3AmacOS">
    <img src="https://img.shields.io/github/workflow/status/BambooTracker/BambooTracker/macOS?logo=apple&logoColor=white" alt="BambooTracker Build-Test Status on macOS" />
  </a>
  <a href="https://github.com/BambooTracker/BambooTracker/actions?query=workflow%3A%22Linux+%28Ubuntu+16.04%29%22">
    <img src="https://img.shields.io/github/workflow/status/BambooTracker/BambooTracker/Linux%20(Ubuntu%2016.04)?logo=ubuntu&logoColor=white" alt="BambooTracker Build-Test Status on Linux (Ubuntu 16.04)" />
  </a>
  <a href="https://github.com/BambooTracker/BambooTracker/actions?query=workflow%3A%22Linux+%28Nixpkgs%29%22">
    <img src="https://img.shields.io/github/workflow/status/BambooTracker/BambooTracker/Linux%20(Nixpkgs)?logo=nixos&logoColor=white" alt="BambooTracker Build-Test Status on Linux (Nixpkgs)" />
  </a>
  <a href="https://ci.appveyor.com/project/BambooTracker/bambootracker">
    <img src="https://img.shields.io/appveyor/build/BambooTracker/BambooTracker?logo=appveyor&logoColor=white" alt="BambooTracker Development-Build Status" />
  </a>
</p>

BambooTracker is a cross-platform music tracker for the Yamaha YM2608 (OPNA) sound chip which was used in NEC PC-8801/9801 series computers.

[日本語](./README_ja.md)

## Table of Contents
1. [Wiki](#wiki)
2. [Community](#community)
3. [Translations](#translations)
4. [Downloads](#downloads)  
  4.1. [Releases (Windows 7+, Windows XP, macOS, Linux)](#releases-windows-7-windows-xp-macos-linux)  
  4.2. [Development builds (Windows 7+, Windows XP, macOS)](#development-builds-windows-7-windows-xp-macos)  
  4.3. [Packages (macOS, Linux, BSD)](#packages-macos-linux-bsd)
5. [Key commands](#key-commands)
6. [Effect list](#effect-list)
7. [File I/O](#file-io)
8. [Building](#building)  
  8.1. [Dependencies](#dependencies)  
  8.2. [Compilation](#compilation)
9. [Changelog](#changelog)
10. [License](#license)
11. [Credits](#credits)

## Wiki
On the [BambooTracker GitHub Wiki](https://github.com/BambooTracker/BambooTracker/wiki), you can find some more details on:
- what a Tracker is
- what BambooTracker is & what it supports
- how to navigate & use BambooTracker's interface
- how to control the Yamaha YM2608 sound chip in the context of BambooTracker

## Community
We have an [official Discord server](https://discord.gg/gBscTMF) where you can chat with BambooTracker users, developers and package maintainers, ask for help, help others and share your tunes on.

## Translations
BambooTracker currently supports the following languages:

- English (default)
- 日本語 / Japanese
- Français / French
- Polski / Polish

If you'd like to see your language of choice added to the list, join the Discord server and let us know! We can walk you through the steps required to set up the translation tool.

## Downloads
### Releases (Windows 7+, Windows XP, macOS, Linux)
Releases are recommended for most users, as they should provide a good & stable experience.

[![Release](https://img.shields.io/badge/Download-Release-brightgreen?style=for-the-badge)](https://github.com/BambooTracker/BambooTracker/releases/latest)

### Development Builds (Windows 7+, Windows XP, macOS)
Development builds are built & uploaded whenever a code change has been committed to the base repository *or a pull request*.
They thus offer the latest or in-development features and fixes, but are not optimised for regular use.

[![Development Build](https://img.shields.io/badge/Download-Development%20Build-yellow?style=for-the-badge)](https://ci.appveyor.com/project/BambooTracker/bambootracker)
- If you're looking for
  - the latest merged commit, make sure **ONLY**  
    `master -o- (some numbers & letters)`  
    is displayed at the top instead of  
    `master -o- (some numbers & letters) ← in_development-bugfix (some numbers & letters)`
  - a specific Pull Request, make sure that it says  
    `Pull request #(Pull Request ID)`  
    in the top left  

  ... otherwise check the History tab to find whichever of those you need.
- In the "Job name" column, find the row that says `APPVEYOR_JOB_NAME=for (your OS)` and click on it.
- On the new page, click on the `Artifacts` tab on the right to get to the download page.

### Packages (macOS, Linux, BSD)
[![Packaging status](https://repology.org/badge/vertical-allrepos/bambootracker.svg)](https://repology.org/project/bambootracker/versions)

#### Nixpkgs (macOS, Linux)
Nixpkgs package: https://search.nixos.org/packages?query=bambootracker

Declarative installation:
```nix
{
  environment.systemPackages = with pkgs; [
    bambootracker
  ];
}
```

Imperative installation:
```sh
nix-env -iA nixpkgs.bambootracker
```

#### Debian / Ubuntu
```sh
sudo apt install bambootracker
```

#### Arch / Manjaro
AUR package: https://aur.archlinux.org/packages/bambootracker-git/

#### FreeBSD
```sh
pkg install bambootracker
```

#### Other
See [Building](#building)

## Key commands
See [KEYCOMMANDS.md](./KEYCOMMANDS.md).

## Effect list
See [EFFECTLIST.md](./EFFECTLIST.md).

## File I/O
See [FILEIO.md](./FILEIO.md).

## Building
### Dependencies
To build BambooTracker, you'll need the following dependencies across all platforms:

- Qt (5.5 or higher)
- Qt Tools (qmake, lrelease, ...)
- A Qt-supported C++ compiler (GCC, Clang, MSVC, ...)
- make

How to acquire these and further required / optional dependencies are specific to your OS (distribution).

#### Windows
- C++ compiler: You can use either of these options
  - MinGW  
    Should be a bundled option in the Qt installer.  
    Otherwise check the Qt docs for your Qt version's compatible GCC version.
  - Clang  
    Untested but might work.
  - MSVC  
    Either bundled with [Visual Studio](https://visualstudio.microsoft.com) or standalone (check "Build Tools for Visual Studio 2019" download).
- [Qt](https://www.qt.io/download-qt-installer)
  Older Qt versions (e.g. for an XP builds) may require you to checkout & compile Qt yourself, official prebuilt versions were removed by Qt.

#### macOS
For simplicity, these instructions assume the use of [Homebrew](https://brew.sh/) & Qt5.

- C++ compiler: Xcode Command Line Tools  
  The challenge of acquiring these is left to the reader.  
  (The developer writing this doesn't use macOS, try looking on the web for a guide perhaps)
- Qt5:  
```bash
brew install qt5
```

**Optional dependencies**:
- JACK: Support for connecting to a JACK server in vendored RtAudio / RtMidi.  
  Requires JACK (version 1 or 2) headers & libraries.  
  ```bash
  brew install jack
  ```
  Optional: pkg-config, can be skipped but may make finding JACK headers & libraries harder.  
  ```bash
  brew install pkg-config
  ```
- RtAudio / RtMidi: Use a precompiled RtAudio / RtMidi installation instead of our vendored one.  
  (Obsoletes the optional dependencies above)  
  Requires RtAudio (5.1.0 or higher) and/or RtMidi (4.0.0 or higher) + pkg-config.
  ```bash
  brew install rt-audio rt-midi pkg-config
  ```

#### Linux
Installing dependencies highly depends on your distribution and package manager of choice, search the subsections below for your distribution to find a tested set of install instructions.

**Additional dependencies**:
- ALSA: Required for minimal audio & MIDI support.  
  Requires ALSA headers & libraries.

**Optional dependencies**:
- PulseAudio: Support for connecting to a PulseAudio server in vendored RtAudio.  
  Requires PulseAudio headers & libraries.  
  Optional: pkg-config, can be skipped but may make finding PulseAudio headers & libraries harder.
- JACK: Support for connecting to a JACK server in vendored RtAudio / RtMidi.  
  Requires JACK (version 1 or 2) headers & libraries.  
  Optional: pkg-config, can be skipped but may make finding JACK headers & libraries harder.
- RtAudio / RtMidi: Use a precompiled RtAudio / RtMidi installation instead of our vendored one.  
  (Obsoletes the optional dependencies above)  
  Requires RtAudio (5.1.0 or higher) and/or RtMidi (4.0.0 or higher) + pkg-config.

##### Debian / Ubuntu:
```bash
# Optional dependencies
OPTIONALDEPS=""

# PulseAudio
OPTIONALDEPS="$OPTIONALDEPS libpulse-dev"

# Either:
# JACK 1
OPTIONALDEPS="$OPTIONALDEPS libjack-dev"
# JACK 2
OPTIONALDEPS="$OPTIONALDEPS libjack-jackd2-dev"

# Either / Both:
# System-RtAudio
OPTIONALDEPS="$OPTIONALDEPS librtaudio-dev"
# System-RtMidi
OPTIONALDEPS="$OPTIONALDEPS librtmidi-dev"

# Install dependencies
apt install \
  build-essential \
  qt5-default qttools5-dev-tools \
  libasound2-dev \
  $OPTIONALDEPS
```

##### Arch Linux / Manjaro:
```bash
# Optional dependencies
OPTIONALDEPS=""

# PulseAudio
OPTIONALDEPS="$OPTIONALDEPS libpulse"

# Either:
# JACK 1
OPTIONALDEPS="$OPTIONALDEPS jack"
# JACK 2
OPTIONALDEPS="$OPTIONALDEPS jack2"

# Either / Both:
# System-RtAudio
OPTIONALDEPS="$OPTIONALDEPS rtaudio"
# System-RtMidi
OPTIONALDEPS="$OPTIONALDEPS rtmidi"

# Install dependencies
pacman -S \
  qt5-tools \
  alsa-plugins \
  $OPTIONALDEPS
```

#### BSD
Mostly like Linux:

- ALSA is optional
- OSS4 headers & libraries is required instead

If you managed to get BambooTracker manually compiled on a BSD system, feel free to open a Pull Request and add your dependency install instructions here!

### Compilation
These compilation instructions assume CLI usage, though it's possible to use an IDE like Qt Creator instead. They should generally work on all platforms, specific changes are mentioned in the subsections below.

Qmake options (flags/switches):
- PREFIX: Where to install the completed build.  
  Default:  
  - Windows: `C:\BambooTracker`
  - macOS/Linux/BSD: `/usr/local`  
  Example: `PREFIX=C:\Users\Owner\Programs\BambooTracker`
- CONFIG  
  Can be specified multiple times to add multiple options.  
  Use `+=` to add & `-=` to remove an option.
  - debug: A debug build, may be helpful for debugging crashes.
  - release: A release build, more optimised & slimmer than a debug one.
  - install_flat: Don't use Linux FHS paths under PREFIX during installation. (Default on Windows)
  - install_minimal: Skip installation of non-essential files.
  - use_alsa: Compile vendored RtAudio & RtMidi with explicit support for ALSA<sup>1</sup>. (Default on Linux)
  - use_oss: Compile with explicit support for OSS4<sup>2</sup>. (Default on BSD)
  - use_pulse: Compile vendored RtAudio with explicit support for PulseAudio<sup>1</sup>.
  - use_jack: Compile with explicit support for JACK 1/2<sup>13</sup>.
  - system_rtaudio: Skips RtAudio compilation and links against the system's RtAudio installation instead.
  - system_rtmidi: Skips RtMidi compilation and links against the system's RtMidi installation instead.
  - real_chip: Compile with support for SCCI and C86CTL interfaces to a real OPNA chip<sup>4</sup>. (Default on Windows)

<sup>1</sup>: Only works on Linux and BSD.  
<sup>2</sup>: Shipped & auto-detected(?) on FreeBSD but possibly not functional in RtAudio.  
<sup>3</sup>: API technically supported on Windows but unlikely to compile in Rt library.  
<sup>4</sup>: Builds code that doesn't use an OSI-certified license. Only supported on Windows.

Example:
```bash
# Where you want to locally keep the source code clone
cd /home/owner/devel

# Can leave away --recurse-submodules if CONFIG+=system_rtaudio AND CONFIG+=system_rtmidi will be used
git clone https://github.com/BambooTracker/BambooTracker --recurse-submodules
cd BambooTracker

# Configure
qmake PREFIX=/usr/local CONFIG-=debug CONFIG+=release CONFIG+=use_alsa CONFIG+=use_pulse CONFIG+=use_jack

# Recursively initialises subprojects properly, dependency tests may be flakey if run multithreaded
make qmake_all

# Compile with 4 threads
make -j4

# Installs to PREFIX
make install
```

#### Windows
Enter a shell with Qt + your compiler set up before starting the above steps. (Qt installer adds scripts you can use for this)

- If you're using MinGW, use `mingw32-make` / `mingw64-make` instead of `make`.
- If you're using MSVC, **TODO**.

Qt Creator may be used for a more graphical compilation process instead.

#### macOS
If you decided to use Homebrew's JACK without pkg-config, you may need to help the build process out by
passing `qmake` some additional arguments: `LIBS+=-L/usr/local/opt/jack/lib INCLUDEPATH+=/usr/local/opt/jack/include`.

##### FreeBSD
BambooTracker can be built via FreeBSD ports instead:

```bash
cd /usr/ports/audio/bambootracker
make install clean
```

## Changelog
*See [CHANGELOG.md](./CHANGELOG.md).*

## License
This program and its source code are licensed under the GNU General License Version 2.

*See [LICENSE](./LICENSE) and [licenses/list.md](./licenses/list.md) for details.*

## Credits
I would like to thank the following people for making it:

- Qt team for Qt framework
- MAME team, and Valley Bell for the codes of YM2608 chip emulation
- Decidetto for the application icon
- Mark James for Silk icons used for some other icons
- VGMRips team for the VGM file format documentation
- Some tracker creators, especially HertzDevil of 0CC-FamiTracker, Leonardo Demartino (delek) of Deflemask Tracker and Lasse Öörni (Cadaver) of GoatTracker for UI and routines of the tracker
- Vitaly Novichkov (Wohlstand) for WOPN instrument format files
- maak, SuperJet Spade, Dippy, RigidatoMS and ImATrackMan for sample modules
- papiezak and Takeshi Abo for sample instruments
- Yuzu4K for sample skin
- Ru^3 for S98 file format documentation
- がし３ (gasshi) for SCCI libraries
- honet for C86CTL libraries
- Gary P. Scavone and others for RtAudio and RtMidi libraries
- Thanks Alexey Khokholov (Nuke.YKT) and Jean Pierre Cimalando for Nuked OPN-Mod emulation
- Jean Pierre Cimalando and Olivier Humbert for French translation
- freq-mod and Midori for Polish translation
- Ian Karlsson for ADPCM encoder/decoder
- And everyone who helps this project!
