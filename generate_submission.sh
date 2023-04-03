rm -f hw2-submission.zip
zip -r hw2-submission.zip . -x "*.git*" "*build*" "*input*" "*expected*" "*autograder*" "*src/datastructure.hpp" ".vscode*"
