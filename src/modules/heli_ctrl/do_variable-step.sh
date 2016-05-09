cd heli_ctrl_ert_rtw

sed -e s/"0.12345F"/"dt"/g heli_ctrl.c > heli_ctrl.c_
sed -e s/"void heli_ctrl_step(void)"/"void heli_ctrl_step(real32_T dt)"/g heli_ctrl.c_ > heli_ctrl.c__
sed -e s/"void heli_ctrl_step(void)"/"void heli_ctrl_step(real32_T dt)"/g heli_ctrl.h > heli_ctrl.h_

rm heli_ctrl.c heli_ctrl.c_ heli_ctrl.h
mv heli_ctrl.c__ heli_ctrl.c
mv heli_ctrl.h_ heli_ctrl.h

./../../../../Tools/fix_code_style.sh heli_ctrl.h
./../../../../Tools/fix_code_style.sh heli_ctrl.c
