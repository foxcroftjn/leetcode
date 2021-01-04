from itertools import chain
import numpy as np
from statistics import median


for i in range(500, 1000):
    a = np.random.randint(0, 5, 4)
    b = np.random.randint(0, 5, 4)
    print(f'    int a{i}[] = ' + str(sorted(a)).replace('[', '{').replace(']', '}') + ';')
    print(f'    int b{i}[] = ' + str(sorted(b)).replace('[', '{').replace(']', '}') + ';')
    print(f'    assert({median(chain(a, b))} == findMedianSortedArrays(a{i}, {len(a)}, b{i}, {len(b)}));')
    print(f'    printf("Case {i} succeeded\\n");')