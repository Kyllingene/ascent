#ifndef TARGET
#define TARGET

enum Team {
    Self = 0,
    Enemy,
};

enum EffectMode {
    TargetTeam = 0,
    TargetSingle,
    SpawnEntity,
};

#endif