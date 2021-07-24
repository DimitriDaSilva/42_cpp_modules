#!/bin/bash

old_class_name=$1
new_class_name=$2
dest_dir=$3
src_dir=$4

cp $src_dir/$old_class_name.cpp $dest_dir/$new_class_name.cpp
cp $src_dir/$old_class_name.hpp $dest_dir/$new_class_name.hpp

sed -i 's/'$old_class_name'/'$new_class_name'/g' $dest_dir/$new_class_name.cpp
sed -i 's/'$old_class_name'/'$new_class_name'/g' $dest_dir/$new_class_name.hpp

upped_old=`echo $old_class_name | tr '[a-z]' '[A-Z]'`
upped_new=`echo $new_class_name | tr '[a-z]' '[A-Z]'`
sed -i 's/'$upped_old'/'$upped_new'/g' $dest_dir/$new_class_name.cpp
sed -i 's/'$upped_old'/'$upped'/g' $dest_dir/$new_class_name.hpp
