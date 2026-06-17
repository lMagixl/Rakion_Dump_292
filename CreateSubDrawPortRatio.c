
/* public: class CDrawPort __thiscall CDrawPort::CreateSubDrawPortRatio(class AABBox<float,2> const
   &) */

AABBox<float,2> * __thiscall
CDrawPort::CreateSubDrawPortRatio(CDrawPort *this,AABBox<float,2> *param_1)

{
  float fStack00000008;
  
                    /* 0x666c0  1436
                       ?CreateSubDrawPortRatio@CDrawPort@@QAE?AV1@ABV?$AABBox@M$01@@@Z */
  FUN_361bfd6c();
  fStack00000008 = (float)(*(int *)(this + 0x14) - *(int *)(this + 0xc));
  FUN_361bfd6c();
  FUN_361bfd6c();
  FUN_361bfd6c();
  CreateSubDrawPort(this,(AABBox<long,2> *)param_1);
  return param_1;
}

