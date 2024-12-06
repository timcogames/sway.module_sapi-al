#include <sway/sapi/al/oalsoundmanager.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

OALSoundManager::OALSoundManager() { thread_ = std::thread(&OALSoundManager::process, this); }

void OALSoundManager::add() {
  auto soundId = getNextRequestId();
  auto sound = std::unique_ptr<Sound>(new Sound(soundId));

  mutex_.lock();
  requests_.push_back(std::move(sound));
  mutex_.unlock();
}

void OALSoundManager::remove(u32_t id) {
  mutex_.lock();
  auto iter =
      std::remove_if(requests_.begin(), requests_.end(), [id](const auto &request) { return request->id == id; });
  requests_.erase(iter, requests_.end());
  mutex_.unlock();
}

auto OALSoundManager::process() -> i32_t {
  std::cout << requests_.size() << std::endl;
  return 0;
}

NS_END()  // namespace sapi
NS_END()  // namespace sway
