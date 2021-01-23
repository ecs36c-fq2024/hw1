PROJ_ROOT="${PWD%/*}"
INPUT_DIR=$PROJ_ROOT/input
RESULT_DIR=$PROJ_ROOT/autograder/result
if [[ -d $RESULT_DIR ]];then
    rm -rf $RESULT_DIR
fi

mkdir $RESULT_DIR
mkdir build
cd build
cmake $PROJ_ROOT || echo "CMake Failed"
make || echo "Make Failed"
if [[ -f main ]];then

    for prob in stack queue linked_list
        do
            NUM_FILES=`ls $INPUT_DIR/$prob | wc -l`
            b=$(($NUM_FILES))
            a=0
            mkdir $RESULT_DIR/$prob
            for ((i=$a; i<$b; i+=1)); do
                ./main $prob $INPUT_DIR/$prob/$i.txt $RESULT_DIR/$prob/$i.txt
            done
    done

else
  echo "Build Failed main was not created with mkdir build && cd build && cmake .. && make" >> $RESULT
fi
cd ..
rm -rf build
python3 score.py