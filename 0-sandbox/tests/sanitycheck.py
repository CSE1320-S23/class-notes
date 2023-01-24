import subprocess
import sys

sys.tracebacklimit = 0


def test_output(cmd, correct_output):
    with subprocess.Popen(
            cmd, stdout=subprocess.PIPE) as p:
        output = p.stdout.read()
        p.kill()
    return output


def test(name, tests):
    print('\n\033[1m', name, '\033[0m')
    correct = 0
    for correct_output, cmd in tests:
        print("  TEST:", cmd[1:])
        output = test_output(cmd, correct_output)

        try:
            assert output == correct_output
            correct += 1
            print('\033[92m', "   PASS", '✓', '\033[0m')
        except Exception as err:
            print('\033[91m', "   FAIL", '✗', '\033[0m')
            print(f'    {output} != {correct_output}')

    return correct, len(tests)


if __name__ == '__main__':
    results = []

    hw_tests = [
        (b"Hello, CSE1320!",
            "./hello")

    ]
    results.append(test("HELLO WORLD TEST", hw_tests))
    correct = sum([f[0] for f in results])
    total = sum([f[1] for f in results])
    print("-"*40)
    print("RESULTS: %2.2f%%" % (correct/total * 100))
    print("-"*40)
    print("Please note that only simple test cases were provided and does not reflect your grade for your submission. Make sure your solution satisfies all the requirements specified in the assignment. When you are ready, submit your assignment as a single zip file to Canvas.")
