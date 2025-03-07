# ExampleMod
Example mod to show how to use Lantern

This mod does the following:
- All swords deal +FLT_MAX damage (plus some other items for some reason)
- Registered items get logged into the console

## How to use
- Clone the repo with recursive submodules
- Open the project in Visual Studio or CLion
- Build the project (Must be Release due to `std::wstring` having an extra field in Debug)
- In the output folder (out/build), grab the following files:
  - LanternExampleMod.dll
    - This is the mod
  - lib/Lantern/Lantern.dll
    - This is the mod loader.
- Move Lantern.dll to the correct folder 
  - (WinDurango) Place Lantern.dll into the Mods folder of MC (create if needed)
  - (Other) Place Lantern.dll in any folder (empty recommended)
- Create a subfolder named LanternMods in the same directory
- Place LanternExampleMod.dll into LanternMods
- Launch the game (Inject Lantern.dll if needed)
  - WinDurango will automatically inject any DLLs in the Mods folder. 

