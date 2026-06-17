
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CIntersector::AddEdge(float,float,float,float) */

void __thiscall
CIntersector::AddEdge(CIntersector *this,float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
                    /* 0x572a0  972  ?AddEdge@CIntersector@@QAEXMMMM@Z */
  fVar1 = param_1 - *(float *)this;
  fVar2 = param_2 - *(float *)(this + 4);
  fVar3 = param_3 - *(float *)this;
  fVar4 = param_4 - *(float *)(this + 4);
  if (_DAT_3622376c < fVar2) {
    if (fVar4 >= _DAT_3622376c && fVar4 != _DAT_3622376c) {
      return;
    }
    if (fVar1 < _DAT_3622376c == (fVar1 == _DAT_3622376c)) {
      if (_DAT_3622376c < fVar3) {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        return;
      }
    }
    else if (fVar3 < _DAT_3622376c != (fVar3 == _DAT_3622376c)) {
      return;
    }
  }
  else {
    if (fVar4 < _DAT_3622376c != (fVar4 == _DAT_3622376c)) {
      return;
    }
    if (fVar1 < _DAT_3622376c == (fVar1 == _DAT_3622376c)) {
      if (_DAT_3622376c < fVar3) goto LAB_36057382;
    }
    else if (fVar3 < _DAT_3622376c != (fVar3 == _DAT_3622376c)) {
      return;
    }
  }
  fVar3 = (fVar4 - fVar2) / (fVar3 - fVar1);
  if ((_DAT_36227d20 / fVar3) * (fVar2 - fVar1 * fVar3) < _DAT_3622376c) {
    return;
  }
LAB_36057382:
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}

