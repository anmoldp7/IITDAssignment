import random
import math

MAX_TEST_CASE_NUM = 10                      # maximum number of test cases
MAX_UPPER_BOUND_VALUE = 50000000.0          # maximum value for a_i
MIN_LOWER_BOUND_VALUE = -50000000.0         # minimum value for a_i
MAX_NUM_FOR_TEST = 10000000                 # maximum value for i
MAX_E = 50000000.0                          # maximum value of e
MIN_E = -50000000.0                         # minimum value of e

if __name__ == "__main__":
    t = math.floor(MAX_TEST_CASE_NUM * random.random())
    f = open("input.txt","w")
    f.write(str(t) + "\n")
    for i in range(t):
        n = math.floor(MAX_NUM_FOR_TEST * random.random())
        f.write(str(n) + "\n")
        for x in range(n):
            f.write(str(random.uniform(MIN_LOWER_BOUND_VALUE,MAX_UPPER_BOUND_VALUE)) + " ")
        f.write("\n")
        f.write(str(random.uniform(MIN_E, MAX_E)) + "\n")
    f.close()