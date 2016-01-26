#include "GameApp.h"


GameApp::GameApp()
{
}


GameApp::~GameApp()
{
}

bool GameApp::update(ESContext* ctx, float deltaTime)
{
	m_currentState->update(ctx, deltaTime);
	return true;
}

void GameApp::render(ESContext* ctx)
{

	// Draw batched objects to screen.
	m_currentState->render(ctx);
}

void GameApp::setState(GameState* newState)
{
	m_currentState = newState;
}