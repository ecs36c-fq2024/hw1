"""Compare two files and write score to json
"""
import os
import json


def load_content(file):
    with open(file) as r:
        return [s.strip() for s in r.read().split("\n") if len(s) > 0]


def compare_file(output_file, expected_file):
    output_content = load_content(output_file)
    expected_content = load_content(expected_file)
    output_len = len(output_content)
    if output_len != len(expected_content):
        print("Wrong number of output in output file.")
        return False
    for i in range(len(expected_content)):
        if expected_content[i] != output_content[i]:
            return False
    return True


def grade(output_dir, expected_dir):
    num_files_tested = 0
    for prob_name in os.listdir(expected_dir):
        expected_problem = os.path.join(expected_dir, prob_name)
        for f in os.listdir(expected_problem):
            output_path = os.path.join(output_dir, prob_name, f)
            if not os.path.exists(output_path):
                print(f"File {f} does not exist for problem {prob_name}")
            else:
                if compare_file(output_path, os.path.join(expected_dir, prob_name, f)):
                    print(f"Test for problem {prob_name}, case {f} passed")
                    num_files_tested += 1
    print(f"{num_files_tested} files tested.")


def main():
    # Grading hw2
    autograder_path = os.path.dirname(os.path.abspath(__file__))
    proj_path = os.path.dirname(autograder_path)
    results_path = os.path.join(autograder_path, 'result')
    expected_path = os.path.join(proj_path, 'expected')
    grade(results_path, expected_path)


if __name__ == "__main__":
    main()
