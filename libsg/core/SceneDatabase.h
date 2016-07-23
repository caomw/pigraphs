#pragma once

#include "libsg.h"  // NOLINT

#include "core/Scene.h"
#include "core/SceneSerialized.h"

namespace sg {
namespace core {

// A database of scenes (either generated by people or automatically)
class SceneDatabase {
public:
  SceneDatabase::SceneDatabase(const util::Params& params, ModelDatabase& modelDatabase);

  //! Returns true if scene with given id exists, false otherwise
  bool sceneExists(const string& sceneId) const;

  //! Returns scene with given sceneId
  const Scene& getScene(const string& sceneId) const;

  //! Populates the provided scene by loading the scene with given sceneId and 
  //!  returns true if successful
  bool getScene(const string& sceneId, Scene* pScene) const;

  //! Returns serialized scene with given sceneId
  const SceneSerialized& getSceneSerialized(const string& sceneId) const;

  //! Returns list of sceneIds
  vec<string> sceneIds() const;
private:
  //! Ensure models for scene with given sceneId is loaded
  void ensureSceneIsLoaded(const string& sceneId) const;

  bool loadFromCsv(const string& csvFile);

  const util::Params& m_params;
  ModelDatabase& m_modelDatabase;

  map<string, SceneSerialized> m_scenesSerialized;
  mutable map<string, Scene> m_scenes;
};

}  // namespace core
}  // namespace sg



