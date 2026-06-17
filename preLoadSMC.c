
/* public: void __thiscall PreLoadMng::preLoadSMC(class CTString const &) */

void __thiscall PreLoadMng::preLoadSMC(PreLoadMng *this,CTString *param_1)

{
  undefined4 local_8 [2];
  
                    /* 0x2efa0  4264  ?preLoadSMC@PreLoadMng@@QAEXABVCTString@@@Z */
  param_1 = (CTString *)ParseSmcFile_t(param_1);
  FUN_3602f2f0(this,local_8,(uint *)&param_1);
  return;
}

