// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "InGameMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API UInGameMenuWidget : public UMenuWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION()
	void CancelMenu();
	UFUNCTION()
	void QuitGame();

protected:
	virtual bool Initialize() override;

private:

	UPROPERTY(meta = (BindWidget))
	class UButton* CancelButton;

	UPROPERTY(meta = (BindWidget))
	UButton* QuitButton;

};
