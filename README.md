The simplest application for Jolt.

For a template of a typical cryptocurrency application, see TODO.

# Build

1. Make sure all submodules are updated
```
git submodule update --init --recursive
```

2. Install the xtensa toolchain (only needs to be done the first time)
```
cd jolt_wallet
make install
cd ..
```

3. Add all the appropriate directories to your PATH (first time per bash session)
```
cd jolt_wallet
source export.sh
cd ..
```

4. Build the sdkconfig.defaults
```
make sdkconfig.defaults
```

(TODO Make this automatic in jolt_wallet/make/app.mk)

5. Build the Jolt App
```
make japp
```

6. Flash the Jolt App
```
make jflash
```
