#pragma once

#include <core/app.h>
#include <graphics/renderer.h>
#include <graphics/scene.h>
#include <ecs/world.h>

class NiftyApp: public nft::App
{
  public:
	NiftyApp();
	~NiftyApp();

  private:
	std::unique_ptr<nft::ecs::World>		 world;
	std::unique_ptr<nft::graphics::Scene>	 scene;
	std::unique_ptr<nft::graphics::Renderer> renderer;

	virtual void PreInit() override;
	virtual void PostInit() override;
	virtual void BeginFrame() override {};
	virtual void Update() override;
	virtual void EndFrame() override {};
	
	// Helper method to create test entities in the scene
	void CreateTestEntities();
};
