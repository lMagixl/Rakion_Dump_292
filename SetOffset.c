
/* public: void __thiscall CModelInstance::SetOffset(float * const) */

void __thiscall CModelInstance::SetOffset(CModelInstance *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x15cc40  3537  ?SetOffset@CModelInstance@@QAEXQAM@Z */
  local_c = param_1[3];
  local_4 = param_1[5];
  local_8 = param_1[4];
  FUN_36160200(this + 0xd8,&local_c);
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  *(float *)(this + 0xcc) = *param_1;
  *(float *)(this + 0xd0) = fVar1;
  *(float *)(this + 0xd4) = fVar2;
  return;
}

