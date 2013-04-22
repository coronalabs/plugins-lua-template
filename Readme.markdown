# Plugin Project for Lua 

This is a plugin project for pure Lua-based implementations (no native code).

## Creating a project

In order to create a new project, there are multiple steps involved.

### Getting Started

The first step is to run the following script. This script duplicates the files in this template and then replaces `PLUGIN_NAME` with the name of your plugin library.

Open a Terminal window in the directory for this project template. Then run the following command:

``````
./create_project.sh /path/to/new/project/folder PLUGIN_NAME
``````

Note that `PLUGIN_NAME` should correspond to the name of (e.g. 'openudid') as described in the [Plugin Submission Guidelines](http://docs.coronalabs.com/daily/native/plugin/submission.html).

## Updating the project

### Lua file

Your library file should go into the Lua file located in the `shared/` directory.

The Lua file is a stub that instantiates a [CoronaLibrary][api.type.CoronaLibrary] instance for you. There is a section in the middle that contains a stub example function. You can replace that with your library functions.

### Strings in ALL CAPS

In each file there are strings in ALL CAPS that should be replaced with information specific to your plugin. 

While the helper script has already done a replacement of `PLUGIN_NAME` for you, there are still several strings that need to be updated.

Please see the section `Replacing strings in ALL CAPS` in the [Plugin Submission Guidelines](http://docs.coronalabs.com/daily/native/plugin/submission.html) for a complete list.

## Submitting

If you've finished the steps mentioned in 'Updating the project', then you are ready to submit. 

There is a convenience script that takes care of building and packaging:

* __Building__. The script will build native plugins for iOS and Android. For the Corona Simulator, it will simply copy your Lua file.

* __Packaging__. The script also copies all the files to the desired folder structure described in the [Plugin Submission Guidelines](http://docs.coronalabs.com/daily/native/plugin/submission.html).

To run the script, open a Terminal to your project's root folder. There should be a script called `build.sh` that you can run:

``````
./build.sh
``````

This will create several files:

* a `build` folder
* a `build/sdk` folder
* a zip file in `build/` that will contain all the files in `build/sdk`. This is the file you should submit.

