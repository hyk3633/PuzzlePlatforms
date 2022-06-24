// Fill out your copyright notice in the Description page of Project Settings.


#include "InGameMenuWidget.h"
#include "Components/Button.h"

bool UInGameMenuWidget::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success) return false;

	if (!ensure(CancelButton != nullptr)) return false;
	CancelButton->OnClicked.AddDynamic(this, &UInGameMenuWidget::CancelMenu);
	if (!ensure(QuitButton != nullptr)) return false;
	QuitButton->OnClicked.AddDynamic(this, &UInGameMenuWidget::QuitGame);

	return true;
}

void UInGameMenuWidget::CancelMenu()
{
	Teardown();
}

void UInGameMenuWidget::QuitGame()
{
	if (MenuInterface != nullptr) {
		Teardown();
		MenuInterface->LoadMainMenu();
	}
}
