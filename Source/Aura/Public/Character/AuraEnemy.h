// Copyright Damage Studios 2023

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interface/HighlightHover.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IHighlightHover
{
	GENERATED_BODY()

public:
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;

	UPROPERTY(BlueprintReadOnly)
	bool bHighlighted = false;
};
