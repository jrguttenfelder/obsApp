```bash
# Clone the obs-studio repository
git clone https://github.com/obsproject/obs-studio.git

# Build OBS for Windows
cd obs-studio
CI/build-windows.ps1

# Clone this repository (at the same level as obs-studio)
git clone https://github.com/jrguttenfelder/obsApp

# Build the OBS example application
cd obsApp
npm install

# Start the app
npm start
```

