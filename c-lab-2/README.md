# Install opencv in macos 
!(tutorial)[https://docs.opencv.org/4.5.2/d0/db2/tutorial_macos_install.html]

I just use `homebrew` to install the opencv, but it doesn't work, so I build from source

```shell
brew install opencv
```

# build from source

1. Install prerequisite
Install xcode, and change the develope path for xcode.

```shell
sudo xcode-select --switch /Applications/Xcode.app
brew install cmake pkg-config
```

2. Config, Build and Install
https://docs.opencv.org/4.x/db/d05/tutorial_config_reference.html
```shell
cmake -S . -Bbuild -DOPENCV_GENERATE_PKGCONFIG=YES -DCMAKE_BUILD_TYPE=Release -DBUILD_EXAMPLES=ON
sudo cmake --build build --target install
```

3. Is opencv okay?
```shell
pkg-configs --cflags --libs opencv4
```
Some text will prompt in shell like this
```txt
-I/usr/local/include/opencv4 -L/usr/local/lib -lopencv_gapi -lopencv_highgui -lopencv_ml -lopencv_objdetect -lopencv_photo -lopencv_stitching -lopencv_video -lopencv_calib3d -lopencv_features2d -lopencv_dnn -lopencv_flann -lopencv_videoio -lopencv_imgcodecs -lopencv_imgproc -lopencv_core
```



