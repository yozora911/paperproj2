#pragma once

// �Q�[���V�[��
class SceneGame
{
public:
	SceneGame() {};
	~SceneGame() {};

	// ������
	void Initialize();

	// �I����
	void Finalize();

	// �X�V����
	void Update(float elapsedTime);

	// �`�揈��
	void Render();

	// GUI�`��
	void DrawGUI();
};
