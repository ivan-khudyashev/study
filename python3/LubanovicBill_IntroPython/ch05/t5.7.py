#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
from collections import defaultdict
from pprint import pprint

dict_of_lists = defaultdict(list)
dict_of_lists['a'].append('something for a')
pprint(dict_of_lists['a'])