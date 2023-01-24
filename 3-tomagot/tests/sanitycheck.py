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


currentResult = None  # holds last result object passed to run method


if __name__ == '__main__':
    results = []

    daymapping_tests = [
        (b"\tIt has been 0 days since you last fed Henry. Henry is okay.\n", [
            "./tomagot", "henry", "0.00", "0.4"]),
        (b"\tIt has been 1 day since you last fed Henry. Henry is okay.\n", [
            "./tomagot", "henry", "1.20", "0.4"]),
        (b"\tIt has been 2 days since you last fed Henry. Henry is okay.\n", [
            "./tomagot", "henry", "1.50", "0.4"])
    ]
    results.append(test("DAY MAPPING TEST", daymapping_tests))

    happiness_tests = [
        (b"\tIt has been 0 days since you last fed Henry. Henry is beaming.\n", [
            "./tomagot", "henry", "0.00", "0.9"]),
        (b"\tIt has been 0 days since you last fed Henry. Henry is feeling down.\n", [
            "./tomagot", "henry", "0.00", "0.1"]),
        (b"\tIt has been 0 days since you last fed Henry. Henry is okay.\n", [
            "./tomagot", "henry", "0.00", "0.4"])
    ]
    results.append(test("HAPPINESS MAPPING TEST", happiness_tests))
    correct = sum([f[0] for f in results])
    total = sum([f[1] for f in results])
    print("-"*40)
    print("RESULTS: %2.2f%%" % (correct/total * 100))
    print("-"*40)
    print("Please note that only simple test cases were provided and does not reflect your grade for your submission. Make sure your solution satisfies all the requirements specified in the assignment. When you are ready, submit your assignment as a single zip file to Canvas.")
