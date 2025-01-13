# Romancing Saga 2 Unreal project

## Requirements

### Link Github and Epic Accounts

Follow this so you can access Unreal Engine repositories : https://www.unrealengine.com/en-US/ue-on-github

### Git

You need to have git for windows installed.

I also recommend GitHub Desktop to easily manage repos : https://github.com/apps/desktop

## Install

### Install Unreal Engine

Romancing Saga 2 is created on Unreal Engine 4.27.

Here is my version of Unreal engine modified for the game : https://github.com/nathtest/UnrealEngine/tree/4.27-chaos-RomancingSaga2

It contain only small tweak mainly to allow assigment of chunk id greater than 300.

- Git clone https://github.com/nathtest/UnrealEngine.git
- Checkout to branch "4.27-chaos-RomancingSaga2"
- Follow the install steps on the repo readme
- Compile the engine.

Warning : First compile of the engine can take a very long time

### Install the UProjRosa2 Project

- Git clone this repo
- Right click on "Game.uproject", Select "Switch Unreal Engine Version..." and choose your compiled Unreal Engine 4.27
- Right click on "Game.uproject", Select "Generate Visual Studio project files"
- Open the generated "Game.sln" with Visual Studio
- In Vs choose "Developement Editor" in "Solution Configurations"
- Click "Build" -> "Build Game"
- Wait for compile to finish
- Now double click on "Game.uproject" it will open the editor

### Setup the editor

In "Project Settings" choose the following options :

![image](https://github.com/user-attachments/assets/ba3d3371-c088-4c18-9c48-45789cee88b3)

![image](https://github.com/user-attachments/assets/acd1d93d-dbe5-4cd6-a90d-df11fbf87cd8)

In "Editor Preferences" choose the following options :

![image](https://github.com/user-attachments/assets/faa59eb7-cd6d-4484-8122-0bc22d66d883)

In "File" -> "Package Project" -> "Build Configuration" choose "Shipping"

In "File" -> "Build Target" choose "Game"

### Cook package

To build package : "File" -> "Package Project" -> "Windows (64-bit)" and choose where to save your pack files.

After compile, you can find your packs in ..\ChoosenFolder\WindowsNoEditor\Game\Content\Paks

You can assign what assets goes in a specific patch chunk by right clicking on an asset in the editor -> "Asset Actions" -> "Assign to chunks"
