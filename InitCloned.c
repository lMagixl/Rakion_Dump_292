
/* public: void __thiscall CDrawPort::InitCloned(class CDrawPort *,double,double,double,double) */

void __thiscall
CDrawPort::InitCloned
          (CDrawPort *this,CDrawPort *param_1,double param_2,double param_3,double param_4,
          double param_5)

{
  double dVar1;
  CDrawPort *pCVar2;
  float in_stack_00000008;
  undefined1 local_78 [16];
  AABBox<float,2> local_68 [92];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x66780  2308  ?InitCloned@CDrawPort@@QAEXPAV1@NNNN@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211d8b;
  local_c = ExceptionList;
  dVar1 = (double)CONCAT44(param_2._0_4_,in_stack_00000008);
  in_stack_00000008 =
       (float)((float10)(double)CONCAT44(param_4._0_4_,param_3._4_4_) + (float10)dVar1);
  param_2._0_4_ =
       (float)((float10)(double)CONCAT44(param_5._0_4_,param_4._4_4_) +
              (float10)(double)CONCAT44(param_3._0_4_,param_2._4_4_));
  param_3._4_4_ = (float)dVar1;
  param_4._0_4_ = (float)(double)CONCAT44(param_3._0_4_,param_2._4_4_);
  ExceptionList = &local_c;
  FUN_36069060(local_78,(float *)((int)&param_3 + 4),&stack0x00000008);
  pCVar2 = (CDrawPort *)CreateSubDrawPortRatio(param_1,local_68);
  local_4 = 0;
  operator=(this,pCVar2);
  local_4 = 0xffffffff;
  ~CDrawPort((CDrawPort *)local_68);
  ExceptionList = local_c;
  return;
}

