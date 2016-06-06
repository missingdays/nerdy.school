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


w, h = read_list()
c = 0

while min(w, h) > 0:
    if w > h:
        c = c + (w//h)
        w = w%h
    else:
        c = c + (h//w)
        h = h%w

print(c)
