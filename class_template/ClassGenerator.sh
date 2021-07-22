#!/bin/bash

class_name=$1
dest_dir=$2
src_dir=$3

echo $src_dir/ClassName.cpp
echo $dest_dir/$class_name.cpp

cp $src_dir/ClassName.cpp $dest_dir/$class_name.cpp
cp $src_dir/ClassName.hpp $dest_dir/$class_name.hpp

sed -i 's/ClassName/'$class_name'/g' $dest_dir/$class_name.cpp
sed -i 's/ClassName/'$class_name'/g' $dest_dir/$class_name.hpp

upped=`echo $class_name | tr '[a-z]' '[A-Z]'`
sed -i 's/CLASSNAME/'$upped'/g' $dest_dir/$class_name.cpp
sed -i 's/CLASSNAME/'$upped'/g' $dest_dir/$class_name.hpp
