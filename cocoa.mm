#include <AppKit/AppKit.h>

#include <string>

bool copy_to_clipboard(const std::string& s) {
  NSString *text = @(s.c_str());
  [[NSPasteboard generalPasteboard] clearContents];
  return [[NSPasteboard generalPasteboard] setString:text
                                      forType:NSPasteboardTypeString];
}
