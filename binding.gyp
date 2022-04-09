{
    "targets": [
        {
            "target_name": "obsModule",
            "sources": ["src/obsModule.cpp"],
            "include_dirs":["../obs-studio/libobs"],
            "libraries":["../../obs-studio/build64/libobs/RelWithDebInfo/obs.lib"],
            "copies": [
                {
                    "destination": "./build/Release",
                    "files": ["../obs-studio/build64/libobs/RelWithDebInfo/obs.dll"]
                }
            ]
        }
    ]
}