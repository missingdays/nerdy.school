#! /usr/bin/env python
# -*- coding: utf-8 -*-
# vim:fenc=utf-8
#
# Copyright © 2015 missingdays <missingdays@missingdays>
#
# Distributed under terms of the MIT license.

"""
Comparison reduce in functional programming vs cycles in imperative
"""

# Imperative functions

def imperative_sum(a):
    s = 0
    for elem in a:
        s += elem
    return s

def imperative_mul(a):
    m = 1
    for elem in a:
        m *= elem
    return m

def imperative_any(a):
    for elem in a:
        if elem:
            return True
    return False

def imperative_all(a):
    for elem in a:
        if not elem:
            return False
    return True

# Functional

def reduce(a, f, initial):
    if len(a) == 0:
        return initial
    return reduce(a[1:], f, f(initial, a[0]))

def functional_sum(a):
    s = lambda a, b: a + b
    return reduce(a, s, 0)

def functional_mul(a):
    m = lambda a, b: a * b
    return reduce(a, m, 1)

def functional_any(a):
    _any = lambda a, b: a or b
    return reduce(a, _any, False)

def functional_all(a):
    _all = lambda a, b: a and b
    return reduce(a, _all, True)

