rm -f hw2-submission.zip
zip -r hw2-submission.zip . -x "*.git*" "*build*" "main.cpp" "*input*" "*expected*" "*autograder*" "*src/datastructure.hpp"
