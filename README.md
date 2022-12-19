# cl: clip lightweight

macOS has a shell command utility `pbcopy` to copy an arbitrary text to the system clipboard.
```
echo "hello world" | pbcopy
```

Tool `cl` demonstrates how to implement it using Cocoa framework.


## Dependency 
* Support macOS 10.0 and beyond. See [NSPasteboard](https://developer.apple.com/documentation/appkit/nspasteboard)

## How to build and install
```
clang++ -std=c++20 -framework AppKit main.cc cocoa.mm -O3 -o cl
```

## How to install
```
sudo cp ./cl /usr/local/bin/
```

## How to run
```
cl <ANY TEXT>
```

## Example
```
cl You can type alphabet, numbers such as 123, unicode ♥, quotes such as \"this\" and some symbols less special to the shell such as @! and any quoted ones like "%^&*()-_=+"
```

## How to test manually
After issuing `cl` command, paste the clipboard to any text editor.