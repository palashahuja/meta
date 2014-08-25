/**
 * @file lm-test.cpp
 * @author Sean Massung
 */

#include "meta.h"
#include "lm/language_model.h"

using namespace meta;

int main(int argc, char* argv[])
{
    lm::language_model<3> model{argv[1]};
    for (size_t i = 1; i < 10; ++i)
    {
        auto sentence = model.generate(i);
        std::cout << sentence << std::endl;
        std::cout << "  -> perplexity_per_word: "
                  << model.perplexity_per_word(sentence) << std::endl;
    }
}
