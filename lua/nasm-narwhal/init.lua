

local M = {

}

function M.setup(conf)

    local parser_config = require("nvim-treesitter.parsers").get_parser_configs()

    parser_config.asm = {
        install_info = {
            -- Change this url to your grammar
            url = "~/TS/tree-sitter-asm",
            -- If you use an external scanner it needs to be included here
            files = { "src/parser.c" },
            generate_reqires_npm = false,
            requires_generate_from_grammar = false,
        },
        -- The filetype you want it registered as
        filetype = "asm",
    }

    os.execute("ln -s ~/TS/tree-sitter-asm/queries ~/.config/nvim/queries/asm")

end


return M
