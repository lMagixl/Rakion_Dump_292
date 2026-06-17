
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CEntity::InflictDirectDamage(class CEntity *,class CEntity *,enum
   DamageType,float,class Vector<float,3> const &,class Vector<float,3> const &) */

void __thiscall
CEntity::InflictDirectDamage
          (CEntity *this,CEntity *param_1,CEntity *param_2,DamageType param_3,float param_4,
          Vector<float,3> *param_5,Vector<float,3> *param_6)

{
                    /* 0x125dd0  2283
                       ?InflictDirectDamage@CEntity@@QAEXPAV1@0W4DamageType@@MABV?$Vector@M$02@@2@Z
                        */
  if (_DAT_3622376c < param_4) {
    (**(code **)(*(int *)param_1 + 0x130))(param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

