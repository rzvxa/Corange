local corange = require("corange")

function init()
	return {
		name = "Main Camera",
		components = {
			camera = {
				target = {0, 0, 0},
				fov = 0.785398163,
				near_clip = 0.1,
				far_clip = 512
			},
			position = {0, 0, 10}
		}
	}
end


function update(camera, position)
	clog('camera updated!')
end
