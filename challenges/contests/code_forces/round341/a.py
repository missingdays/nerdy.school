#! /usr/bin/env python
# -*- coding: utf-8 -*-
# vim:fenc=utf-8
#
# Copyright © 2016 missingdays <missingdays@missingdays>
#
# Distributed under terms of the MIT license.

"""

"""

def read_list():
    return [int(i) for i in input().split()]
def new_list(n):
    return [0 for i in range(n)]
def new_matrix(n, m=0):
    return [[0 for i in range(m)] for i in range(n)]


n = int(input())

a = read_list()

odd, even = [], []

for e in a:
    if e%2 == 0:
        even.append(e)
    else:
        odd.append(e)

if len(odd)%2 == 0:
    print(sum(odd) + sum(even))
    exit()

mini, m = 0, float("inf")

for i in range(len(odd)):
    if odd[i] < m:
        m = odd[i]
        mini = i

print(sum(odd[:mini])+sum(odd[mini+1:])+sum(even))
