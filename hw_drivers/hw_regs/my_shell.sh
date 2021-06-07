#!/bin/bash

for f in "$@"
do
    mv $f ${f/_356.0/}
done
