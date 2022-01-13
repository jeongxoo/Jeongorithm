import math

def solution(w,h):
    if w and h == 1: return 0
    w, h = ((h, w) if w > h else (w, h))
    m_div = [i if (w % i == 0) and (h % i == 0) else 1 for i in range(2, w + 1)]
    m_div = max(m_div) if len(m_div) != 0 else 1
    _w, _h = w // m_div, h // m_div
    return (w * h) - (((_w * _h) - (sum(list(map(lambda x: math.floor(-1 * (_h / _w) * x + _h), [i for i in range(1, _w)]))) * 2)) * m_div)