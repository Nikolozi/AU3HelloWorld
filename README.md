# AUv3 Hello World Plug-ins

## Purpose
The purpose of this project is to provide a sample AUv3 plug-ins that can help the Reaper developer debug any issues related to the [AUv3/Reaper compatibility](https://forum.cockos.com/showthread.php?t=300840).  
But anyone can use it for debugging purposes if they find it useful.

## How it was created
- Used the oldest Xcode that would run on my older Mac, and it was Xcode 15.
- Set the minimum deployment target to macOS 12.
- Used built-in templates to create AUv3 extension types: Instrument (aumu), Music Effect (aumf), and MIDI Processor (aumi).

## Reaper Disambiguation Issue
- I gave the aumu and aumf plug-in types the same name in Info.plist files. They are both called "Hello World".
- I was able to load "Hello World" both as an Instrument and as an Audio Effect plug-in in Logic Pro.
- But in Reaper v7.53, only the one Hello World (aumu) appears.
- The issue goes away if I give the aumf a different name in its Info.plist file.

## MIDI Out in Instrument
- I added MIDI Out support to the Instrument type.
- It takes input MIDI notes and transposes them by 19 semitones to make it obvious that the plug-in transformed them.
- Tested in Logic Pro, and it works as expected.
- The hope is that Reaper can support MIDI Out behaviour for AUv3s just as it does for VSTi.

## MIDI Processor
- I included a MIDI Processor type just in case. It's named "HW MIDI FX".

## Installing
- Unzip [AU3HelloWorld.zip](https://github.com/Nikolozi/AU3HelloWorld/releases/tag/1.0) and move AU3HelloWorld.app to the Applications folder.
- The app includes all 3 types of extensions inside the bundle.
- I don't have macOS 12 to test if it runs and works.
- I've only tested the app on macOS Tahoe (26.1) and Sonoma (14.6).

## Compiling Code
- Just need to set DEVELOPMENT_TEAM to your Apple Developer ID.
- I have a config file DEVELOPMENT_TEAM.xcconfig with just this entry `DEVELOPMENT_TEAM = XXXXXXXXXX`, where XXXXXXXXXX is my Apple Dev ID.
