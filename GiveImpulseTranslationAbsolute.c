
/* public: void __thiscall CMovableEntity::GiveImpulseTranslationAbsolute(class Vector<float,3>
   const &) */

void __thiscall
CMovableEntity::GiveImpulseTranslationAbsolute(CMovableEntity *this,Vector<float,3> *param_1)

{
                    /* 0x1ade10  2218
                       ?GiveImpulseTranslationAbsolute@CMovableEntity@@QAEXABV?$Vector@M$02@@@Z */
  FUN_361b4260(this + 0x250,(float *)param_1);
  AddToMovers(this);
  return;
}

