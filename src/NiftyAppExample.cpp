#include "NiftyAppExample.h"

NiftyApp::NiftyApp(): App("NiftyApp")
{
	ShowConsole(true);
	world	 = std::make_unique<nft::ecs::World>();
	scene	 = std::make_unique<nft::graphics::Scene>(world.get());
	renderer = std::make_unique<nft::graphics::Renderer>();
}

NiftyApp::~NiftyApp()
{
	// Explicit destructor to ensure proper cleanup of unique_ptr with forward declared types
	// The destructors of world, scene, and renderer will be called automatically
}

void NiftyApp::Update()
{
	// Example of how to modify materials at runtime
	// You could access the scene through the renderer if needed
	// This demonstrates the material system is working

	// Update the renderer
	renderer->DrawFrame();
}

void NiftyApp::PreInit() { ShowConsole(true); }

void NiftyApp::PostInit()
{
	renderer->Init(scene.get(), main_window->GetSurface());
	auto pipeline = renderer->AddPipeline();

	// Create some entities to render
	CreateTestEntities();

	renderer->CreatePipelines();
}

void NiftyApp::CreateTestEntities()
{
	// FOR DEBUGGING: Create only ONE entity first to test
	auto triangle_entity = scene->CreateTriangleEntity(
		glm::vec3(0.0f, 0.0f, 0.0f),  // position at center
		glm::vec3(1.0f, 1.0f, 1.0f),  // normal scale
		glm::vec3(0.0f, 0.0f, 0.0f)   // no rotation
	);

	// Comment out other entities for now
	/*
	// Create a quad entity to the right - make it bigger and further apart
	auto quad_entity = scene->CreateQuadEntity(
		glm::vec3(3.0f, 0.0f, 0.0f),  // position - move further right
		glm::vec3(1.5f, 1.5f, 1.0f),  // scale - make it bigger
		glm::vec3(0.0f, 0.0f, 45.0f)  // rotation (45 degrees around Z axis)
	);

	// Create another triangle to the left - make it bigger and further apart
	auto triangle2_entity = scene->CreateTriangleEntity(
		glm::vec3(-3.0f, 0.0f, 0.0f), // position - move further left
		glm::vec3(1.5f, 1.5f, 1.0f),  // scale - make it bigger
		glm::vec3(0.0f, 0.0f, 180.0f) // rotation (180 degrees around Z axis)
	);
	*/
}
