
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: float __thiscall CParticle::GetBezierCurves(float,float,float,float) */

float __thiscall
CParticle::GetBezierCurves(CParticle *this,float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
                    /* 0x18e9d0  1720  ?GetBezierCurves@CParticle@@QAEMMMMM@Z */
  fVar1 = _DAT_36223384 - param_4;
  return param_4 * param_4 * param_3 +
         (fVar1 * param_4 + fVar1 * param_4) * param_2 + fVar1 * fVar1 * param_1;
}

