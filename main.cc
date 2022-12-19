#include <string>

bool copy_to_clipboard(const std::string &s);

std::string concat_args(int argc, char **argv) {
    std::string text;
    std::for_each(argv + 1, argv + argc, [&](const char *c_str)
                  { text += std::string(c_str) + " "; });
    if (!text.empty()) {
    text.resize(text.size() - 1);
    }
    return text;
}

int main(int argc, char **argv)
{
    auto text = concat_args(argc, argv);
    return copy_to_clipboard(text) ? 0 : 1;
}
