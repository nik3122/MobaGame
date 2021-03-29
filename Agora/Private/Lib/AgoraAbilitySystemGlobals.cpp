// Copyright (C) 2019 Kevin Ossia, Joe Finley, and Nicholas Arthur. Unauthorized copying of this file via any medium is strictly prohibited.


#include "AgoraAbilitySystemGlobals.h"

#include "AgoraTypes.h"

FGameplayEffectContext* UAgoraAbilitySystemGlobals::AllocGameplayEffectContext() const
{
    return new FAgoraGameplayEffectContext();
}
