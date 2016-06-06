
from reduce import *

a1 = [1, 2, 3, 4, 5]
a2 = [-1, 0, 10, 15]
a3 = [True, True, True, True]
a4 = [False, True, True, True]
a5 = [False, False, False, True]

def test_sum():
    assert imperative_sum(a1) == functional_sum(a1)
    assert imperative_sum(a2) == functional_sum(a2)

def test_mul():    
    assert imperative_mul(a1) == functional_mul(a1)
    assert imperative_mul(a2) == functional_mul(a2)
    
def test_any():
    assert imperative_any(a3) == functional_any(a3)
    assert imperative_any(a4) == functional_any(a4)
    assert imperative_any(a5) == functional_any(a5)

def test_all():
    assert imperative_all(a3) == functional_all(a3)
    assert imperative_all(a4) == functional_all(a4)
    assert imperative_all(a5) == functional_all(a5)
