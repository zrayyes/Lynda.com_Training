FOR /F "tokens=* USEBACKQ" %%F IN (`whoami`) DO (
    IF "%%F" == "ik\rayyes.z" (
        START "Docker GCC" docker run -it -d -v C:/Users/rayyes.z/Desktop/GitHub/TrainingCode/C/LCTHW/exercises:/workdir -w="/workdir" gcc:8
    ) ELSE (
        START "Docker GCC" docker run -it -d -v C:/Users/Zuhair/Desktop/GitHub/Training/C/LCTHW/exercises:/workdir -w="/workdir" gcc:8\
    )
)
